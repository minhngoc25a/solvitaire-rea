plugins {
    java
    id("checkstyle")
    id("com.diffplug.spotless") version "6.25.0"
}

group = "com.solvitaire.solitaire"
version = "1.0.0"

repositories {
    mavenCentral()
}

java {
    sourceCompatibility = JavaVersion.current()
    targetCompatibility = JavaVersion.current()
}

tasks.withType<JavaCompile> {
    options.encoding = "UTF-8"
}

sourceSets {
    main {
        // Only the refactored com.solvitaire.solitaire package builds cleanly.
        // com.solvitaire.app is the raw obfuscated CFR reference copy; it still
        // carries CFR artifacts and is intentionally excluded.
        // api/ApiCommandProcessor.java has CFR-declaration issues (missing local
        // variable type declarations) and is excluded pending a rewrite.
        java {
            srcDirs("java_source/com/solvitaire/solitaire")
            exclude("api/ApiCommandProcessor.java")
            exclude("api/DesktopDuplication.java")
        }
    }
}

dependencies {
    checkstyle("com.puppycrawl.tools:checkstyle:10.17.0")
    implementation("org.knowm.xchart:xchart:3.8.1")
}

checkstyle {
    config = resources.text.fromFile(file("config/checkstyle/google_checks.xml"))
    toolVersion = "10.17.0"
}

spotless {
    java {
        googleJavaFormat("1.18.1")
    }
}

tasks.register("lint") {
    dependsOn("checkstyleMain", "spotlessJavaCheck")
    description = "Run Checkstyle (Google Java rules) and google-java-format check"
}

tasks.register("fmt") {
    dependsOn("spotlessApply")
    description = "Apply google-java-format to the Java source"
}

tasks.register("compile-java") {
    dependsOn("compileJava")
    description = "Compile the refactored Java source"
}

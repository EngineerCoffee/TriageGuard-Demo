---
name: conan-dependency-audit
description: Resolve ConanException missing prebuilt package binaries for boost and embedded toolchains during CI builds.
---
# Conan Binary Resolution Skill

Run `conan install . --build=missing -pr:b=default` when a prebuilt binary is unavailable for the target architecture.

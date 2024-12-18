// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterStructurizr",
    products: [
        .library(name: "TreeSitterStructurizr", targets: ["TreeSitterStructurizr"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterStructurizr",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterStructurizrTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterStructurizr",
            ],
            path: "bindings/swift/TreeSitterStructurizrTests"
        )
    ],
    cLanguageStandard: .c11
)

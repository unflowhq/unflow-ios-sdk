// swift-tools-version:5.5
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "Unflow",
    platforms: [.iOS(.v11)],
    products: [
        .library(
            name: "Unflow",
            targets: ["UnflowTarget"]
        )
    ],
    dependencies: [
        .package(url: "https://github.com/kean/Nuke.git", from: "10.0.0"),
    ],
    targets: [
        .binaryTarget(
            name: "UnflowUI",
            path: "UnflowUI.xcframework"
        ),
        .binaryTarget(
            name: "Unflow",
            path: "Unflow.xcframework"
        ),
        .target(
            name: "UnflowTarget",
            dependencies: [
                "Unflow",
                "UnflowUI",
                "Nuke",
            ]
        )
    ]
)

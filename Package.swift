// swift-tools-version:5.5
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "Unflow", platforms: [.iOS(.v11)],
    products: [.library(name: "Unflow", targets: ["UnflowTarget"])],
    targets: [
        .binaryTarget(name: "UnflowUI", path: "UnflowUI.xcframework"),
        .target(name: "UnflowTarget", dependencies: ["UnflowUI"]),
    ])

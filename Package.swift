// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "GeoveloNavigationKit",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "GeoveloNavigationKit",
            targets: ["GeoveloNavigationKit"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "GeoveloNavigationKit",
            path: "./GeoveloNavigationKit.xcframework"
        ),
    ]
)
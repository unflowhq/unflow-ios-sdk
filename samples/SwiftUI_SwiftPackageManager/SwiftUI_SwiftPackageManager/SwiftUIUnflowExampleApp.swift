import SwiftUI
import UnflowUI

@main
struct SwiftUIUnflowExampleApp: App {
    @UIApplicationDelegateAdaptor(AppDelegate.self) var appDelegate

    var body: some Scene {
        WindowGroup {
            ContentView()
        }
    }
}


class AppDelegate: NSObject, UIApplicationDelegate {
    func application(_ application: UIApplication,
                     didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey : Any]? = nil) -> Bool {
        
        let client = UnflowSDK.initialize(
            config: UnflowSDK.Config(
                apiKey: "<YOUR API KEY>",
                enableLogging: true
            )
        )
        client.sync()

        return true
    }
}

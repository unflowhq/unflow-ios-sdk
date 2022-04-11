import SwiftUI
import UnflowUI

@main
struct SwiftUIUnflowExampleApp: App {
    @UIApplicationDelegateAdaptor(AppDelegate.self) var appDelegate
    @Environment(\.scenePhase) var scenePhase
    
    var body: some Scene {
        WindowGroup {
            ContentView()
        }
        // To keep Unflow up to date, you can listen for a change in the scenePhase and call sync manually.
        .onChange(of: scenePhase) { phase in
            switch phase {
            case .active:
                UnflowSDK.client.sync()
            default:
                return
            }
        }
    }
}

class AppDelegate: NSObject, UIApplicationDelegate {
    func application(_ application: UIApplication,
                     didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey : Any]? = nil) -> Bool {
        // Throw your API key here. You can find it at https://dashboard.unflow.com/settings/install-sdk.
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

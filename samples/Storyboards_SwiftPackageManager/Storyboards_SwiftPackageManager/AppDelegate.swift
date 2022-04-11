import UIKit
import UnflowUI

@main
class AppDelegate: UIResponder, UIApplicationDelegate {
    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?) -> Bool {
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


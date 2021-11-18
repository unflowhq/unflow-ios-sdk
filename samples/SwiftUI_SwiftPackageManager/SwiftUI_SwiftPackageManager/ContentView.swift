import SwiftUI
import UnflowUI

struct ContentView: View {
    var body: some View {
        VStack{
            OpenerView()
            Spacer()
            Text("Welcome to Unflow!")
                .padding()
            Text("Edit the AppDelegate to add your own API Key to see your content here.")
                .padding()
            Spacer()
        }
    }
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView()
    }
}

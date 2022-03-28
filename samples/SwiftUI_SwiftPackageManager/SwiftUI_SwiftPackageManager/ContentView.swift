import SwiftUI
import UnflowUI

struct ContentView: View {
    var body: some View {
        TabView {
            NavigationView {
                HomeView()
            }
            .tabItem({ Label("Home", systemImage: "house.fill") })
            
            NavigationView {
                CustomGridView()
            }
            .tabItem({ Label("Custom Grids", systemImage: "rectangle.grid.2x2.fill") })
        }
        .navigationViewStyle(.stack)
    }
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView()
    }
}

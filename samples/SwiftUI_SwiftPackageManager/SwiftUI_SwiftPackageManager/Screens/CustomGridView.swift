//
//  CustomGridView.swift
//  SwiftUI_SwiftPackageManager
//
//  Created by Alex Logan on 28/03/2022.
//

import SwiftUI
import UnflowUI

/// An example of what you can do with Unflow as a CMS.
struct CustomGridView: View {
    let gridItems = Array(repeating: GridItem(.flexible(minimum: 100), alignment: .top), count: 2)
    
    var body: some View {
        Container {
            ScrollView {
                VStack(alignment: .leading, spacing: 0) {
                    // Use our OpenerView as an invisible data source that simply provides openers
                    OpenerView(openerHost: { openers in
                        // In this example, we show off the first opener as our hero tile.
                        if let firstOpener = openers.first {
                            SectionHeader(text: "Featured")
                            OpenerTile(opener: firstOpener)
                        }
                        SectionHeader(text: "Featured")
                        // We then pass the rest of them to the grid, and use our same opener tile view.
                        LazyVGrid(columns: gridItems, alignment: .center, spacing: 12, pinnedViews: []) {
                            ForEach(Array(openers.dropFirst())) { opener in
                                OpenerTile(opener: opener)
                            }
                        }
                    })
                    .padding()
                }
            }
            .navigationTitle(Text("Grids"))
        }
    }

}

struct CustomGridView_Previews: PreviewProvider {
    static var previews: some View {
        CustomGridView()
    }
}

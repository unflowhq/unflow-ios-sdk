//
//  OpenerImageRow.swift
//  SwiftUI_SwiftPackageManager
//
//  Created by Alex Logan on 28/03/2022.
//

import SwiftUI
import UnflowUI

/// Full width rows using the opener image as their background.
/// Designed to be used with OpenerView(openerHost:) which does not handle layout or interaction for you.
struct OpenerImageRow: View {
    let opener: Opener

    var body: some View {
        Button(action: {
            try? UnflowSDK.client.openScreen(withID: opener.id)
        }) {
            VStack(alignment: .leading) {
                Text(opener.title)
                    .font(.subheadline.weight(.semibold))
                    .foregroundColor(.white)
            }
            .padding()
            .multilineTextAlignment(.leading)
            .frame(height: 88, alignment: .bottomLeading)
            .frame(maxWidth: .infinity, alignment: .bottomLeading)
            .background(
                image
            )
        }
        .clipShape(RoundedRectangle(cornerRadius: 12))
    }
    
    var image: some View {
        ZStack {
            RemoteImage(url: URL(string: opener.imageURL ?? ""))
                .aspectRatio(contentMode: .fill)
            LinearGradient(colors: [.clear, .black.opacity(0.5)], startPoint: .top, endPoint: .bottom)
        }
        .allowsHitTesting(false)
    }
}

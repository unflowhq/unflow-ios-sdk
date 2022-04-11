//
//  SectionHeader.swift
//  SwiftUI_SwiftPackageManager
//
//  Created by Alex Logan on 29/03/2022.
//

import SwiftUI

struct SectionHeader: View {
    let text: String
    
    var body: some View {
        Text(text)
            .font(.subheadline.weight(.semibold))
    }
}

struct SectionHeader_Previews: PreviewProvider {
    static var previews: some View {
        SectionHeader(text: "Section")
    }
}

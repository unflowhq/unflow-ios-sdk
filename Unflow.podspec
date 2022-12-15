Pod::Spec.new do |s|
    s.name                  = 'Unflow'
    s.version               = '1.14.2'
    s.summary               = 'A low-code tool for marketers to ship screens quickly'
    s.source                = { :git => "https://github.com/unflowhq/unflow-ios-sdk.git", :tag => "v#{s.version.to_s}" }
    s.homepage              = 'https://www.unflow.com'
    s.license               = { :type => "Commercial", :text => "Copyright 2021 Letkit Inc." }
    s.author                = { 'Unflow' => 'team@monaru.io' }

    s.platform              = :ios
    s.swift_version         = '5.7'
    s.ios.deployment_target = '11.0'
    s.vendored_frameworks   = 'UnflowUI.xcframework'

    s.pod_target_xcconfig = { "DEFINES_MODULE" => "YES" }
end

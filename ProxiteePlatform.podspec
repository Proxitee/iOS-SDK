Pod::Spec.new do |s|
  s.name         = "ProxiteePlatform"
  s.version      = "0.4.2"
  s.summary      = "iOS SDK for the Proxitee platform"
  s.homepage     = "http://www.proxitee.com/"

  s.license      = {
    :type => 'Copyright',
    :text => <<-LICENSE
      Copyright 2015 Fuzzelogic Solutions Ltd. All rights reserved.
      LICENSE
  }

  s.author       = { "Fuzzelogic Solutions Ltd" => "info@proxitee.com" }

  s.platform     = :ios, "7.0"

  s.source       = { :git => "https://github.com/Proxitee/iOS-SDK.git", :tag => s.version.to_s }

  s.source_files  = "ProxiteePlatform/SDK/Headers/*.h"
  s.public_header_files = "ProxiteePlatform/SDK/Headers/*.h"
  s.preserve_paths = "ProxiteePlatform/SDK/libProxiteePlatform.a"
  s.vendored_libraries = "ProxiteePlatform/SDK/libProxiteePlatform.a"

  s.frameworks = "UIKit", "Foundation", "CoreLocation"

  s.requires_arc = true
  s.dependency "AFNetworking", "~> 2.2"
  s.dependency "JSONModel", "~> 0.13.0"

end

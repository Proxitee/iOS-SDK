//
//  PXTPlatformConfiguration.h
//  ProxiteePlatform
//
//  Created by Michael on 10/28/14.
//  Copyright (c) 2014 com.proxitee.sdk. All rights reserved.
//

#import <Foundation/Foundation.h>

/** Configuration settings
*/
@interface PXTPlatformConfiguration : NSObject

/** The server URL for the API this can be set in Proxitee.plist as apiUrl
*/
@property (nonatomic, strong) NSURL *baseUrl;

/** The API key for the API this can be set in Proxitee.plist as apiKey and can be found in the organisation screen in the cloud CMS
 */
@property (nonatomic, strong) NSString *apiKey;

/** Creates an instance of PXTPlatformConfiguration using the settings inside Proxitee.plist
 @return An instance of PXTPlatformConfiguration
*/
+ (PXTPlatformConfiguration *)defaultConfig;

@end

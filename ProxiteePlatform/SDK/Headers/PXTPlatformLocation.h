//
//  PXTPlatformLocation.h
//  ProxiteePlatform
//
//  Created by Michael on 6/23/14.
//  Copyright (c) 2014 Proxitee. All rights reserved.
//

#import <Foundation/Foundation.h>

/** Model of a proxitee location using values from cloud CMS
 */
@interface PXTPlatformLocation : NSObject

@property (strong, nonatomic) NSString *id;
@property (strong, nonatomic) NSString *name;
@property float latitude;
@property float longitude;

@end

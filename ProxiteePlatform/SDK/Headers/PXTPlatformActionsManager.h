//
//  PXTPlatformActionsManager.h
//  ProxiteePlatform
//
//  Created by Michael on 10/28/14.
//  Copyright (c) 2014 com.proxitee.sdk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PXTPlatformConfiguration.h"
#import "PXTAction.h"
#import "PXTActionRepository.h"
#import "PXTPlatformNotificationCenter.h"
#import "PXTInteractionResult.h"

/** Exposes action tasks
*/
@interface PXTPlatformActionsManager : NSObject

+ (PXTPlatformActionsManager *)setupWithConfig:(PXTPlatformConfiguration *)config;
+ (PXTPlatformActionsManager *)sharedManager;

-(instancetype) __unavailable init;
-(instancetype)initWithConfig:(PXTPlatformConfiguration *)config;

/** Registers a custom action
 
 @param type The type for the custom action, this must match the type specified in the cloud CMS
 @param action Any object that implements the PXTAction protocol
*/
-(void)register:(NSString *)type action:(id<PXTAction>)action;

/** Unregisters a custom action
 
 @param type The type for the custom action, this must match the type specified in the cloud CMS
*/
-(void)unRegister:(NSString *)type;

@end

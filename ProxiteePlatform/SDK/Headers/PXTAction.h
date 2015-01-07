//
//  PXTAction.h
//  ProxiteePlatform
//
//  Created by Michael on 6/25/14.
//  Copyright (c) 2014 Proxitee. All rights reserved.
//

#import <Foundation/Foundation.h>

/** The protocol that needs to be implemented by custom actions
*/
@protocol PXTAction <NSObject>

@required

/** This is invoked by proxitee when the action should be executed based on how it is configured in the cloud CMS
 @param Any custom data that has been specified using the cloud CMS
*/
-(void)execute:(NSDictionary *)data;

@end
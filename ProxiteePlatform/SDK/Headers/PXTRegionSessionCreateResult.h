//
//  PXTRegionSessionCreateResult.h
//  ProxiteePlatform
//
//  Created by Michael on 6/23/14.
//  Copyright (c) 2014 Proxitee. All rights reserved.
//

#import "JSONModel.h"

@interface PXTRegionSessionCreateResult : JSONModel

@property (strong, nonatomic) NSString *_id;
@property (strong, nonatomic) NSDate *started;
@property (strong, nonatomic) NSDate *expired;

@end

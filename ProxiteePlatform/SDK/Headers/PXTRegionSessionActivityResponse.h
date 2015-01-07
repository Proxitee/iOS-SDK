//
//  PXTRegionSessionActivittyResponse.h
//  ProxiteePlatform
//
//  Created by Michael on 6/23/14.
//  Copyright (c) 2014 Proxitee. All rights reserved.
//

#import "PXTBaseResponse.h"
#import "PXTRegionSessionActivityResult.h"

@interface PXTRegionSessionActivityResponse : PXTBaseResponse

@property (strong, nonatomic) PXTRegionSessionActivityResult *result;

@end

//
//  PXTBaseResponse.h
//  ProxiteePlatform
//
//  Created by Michael on 6/23/14.
//  Copyright (c) 2014 Proxitee. All rights reserved.
//

#import "JSONModel.h"

@interface PXTBaseResponse : JSONModel

@property (strong, nonatomic) NSString *uniqueId;
@property (strong, nonatomic) NSString *originalRequestId;
@property (strong, nonatomic) NSDate *timestamp;

@end

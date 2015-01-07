//
//  PXTBaseRequest.h
//  ProxiteePlatform
//
//  Created by Michael on 6/23/14.
//  Copyright (c) 2014 Proxitee. All rights reserved.
//

#import "JSONModel.h"

@interface PXTBaseRequest : JSONModel

@property (strong, nonatomic) NSString *apikey;
@property (strong, nonatomic) NSString *uniqueid;
@property (strong, nonatomic) NSString *timestamp;
@property (strong, nonatomic) NSString *deviceid;
@property (strong, nonatomic) NSString<Optional> *clientCorrelationId;

@end

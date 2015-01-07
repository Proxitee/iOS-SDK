//
//  PXTPlatformActionDTO.h
//  ProxiteePlatform
//
//  Created by Michael on 8/21/14.
//  Copyright (c) 2014 com.proxitee.sdk. All rights reserved.
//

#import "JSONModel.h"

@protocol PXTPlatformActionDTO

@end

@interface PXTPlatformActionDTO : JSONModel

@property (strong, nonatomic) NSString *_id;
@property (strong, nonatomic) NSString *name;
@property (strong, nonatomic) NSString *description;
@property (strong, nonatomic) NSString *type;
@property (strong, nonatomic) NSDictionary<Optional> *data;

@end

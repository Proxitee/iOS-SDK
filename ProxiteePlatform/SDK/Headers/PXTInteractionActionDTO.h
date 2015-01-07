//
//  PXTInteractionActionDTO.h
//  ProxiteePlatform
//
//  Created by Michael on 12/18/14.
//  Copyright (c) 2014 com.proxitee.sdk. All rights reserved.
//

#import "JSONModel.h"
#import "PXTPlatformActionDTO.h"

@protocol PXTInteractionActionDTO

@end

@interface PXTInteractionActionDTO : JSONModel

@property (strong, nonatomic) NSString *_id;
@property (strong, nonatomic) NSString *trigger;
@property (strong, nonatomic) PXTPlatformActionDTO *action;

@end

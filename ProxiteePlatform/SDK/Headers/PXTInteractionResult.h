//
//  PXTInteractionResult.h
//  ProxiteePlatform
//
//  Created by Michael on 12/19/14.
//  Copyright (c) 2014 com.proxitee.sdk. All rights reserved.
//

#import "JSONModel.h"
#import "PXTInteractionActionDTO.h"

@interface PXTInteractionResult : JSONModel

@property (strong, nonatomic) NSArray<PXTInteractionActionDTO, Optional> *actions;

@end

//
//  PXTOrganisationResponse.h
//  ProxiteePlatform
//
//  Created by Michael on 8/19/14.
//  Copyright (c) 2014 com.proxitee.sdk. All rights reserved.
//

#import "PXTBaseResponse.h"
#import "PXTOrganisationResult.h"

@interface PXTOrganisationResponse : PXTBaseResponse

@property (strong, nonatomic) PXTOrganisationResult *result;

@end

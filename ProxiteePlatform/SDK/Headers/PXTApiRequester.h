//
//  PXTApiRequester.h
//  ProxiteePlatform
//
//  Created by Michael on 6/23/14.
//  Copyright (c) 2014 Proxitee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AFNetworking.h"
#import "PXTBaseRequest.h"

@interface PXTApiRequester : NSObject

@property (strong, nonatomic) NSString *apiKey;
@property (strong, nonatomic) NSURL *baseUrl;

-(instancetype) __unavailable init;

-(instancetype)initWith:(NSString *)apiKey baseUrl:(NSURL *)baseUrl;

- (NSURLSessionDataTask *)GET:(NSString *)relativeUrl
                    request:(PXTBaseRequest *)request
                    success:(void (^)(NSURLSessionDataTask *task, id responseObject))success
                    failure:(void (^)(NSURLSessionDataTask *task, NSError *error))failure;

- (NSURLSessionDataTask *)POST:(NSString *)relativeUrl
                    request:(PXTBaseRequest *)request
                    success:(void (^)(NSURLSessionDataTask *task, id responseObject))success
                    failure:(void (^)(NSURLSessionDataTask *task, NSError *error))failure;

- (NSURLSessionDataTask *)DELETE:(NSString *)relativeUrl
                    request:(PXTBaseRequest *)request
                    success:(void (^)(NSURLSessionDataTask *task, id responseObject))success
                    failure:(void (^)(NSURLSessionDataTask *task, NSError *error))failure;

- (NSURLSessionDataTask *)PUT:(NSString *)relativeUrl
                    request:(PXTBaseRequest *)request
                    success:(void (^)(NSURLSessionDataTask *task, id responseObject))success
                    failure:(void (^)(NSURLSessionDataTask *task, NSError *error))failure;

@end

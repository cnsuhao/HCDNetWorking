//
//  NSDictionary+Encrypt.h
//  HCDNetworking
//
//  Created by cheaterhu on 16/1/11.
//  Copyright © 2016年 cheaterhu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (Encrypt)
+(NSString *)stringFromEncryptParams:(NSDictionary *)params;
+(NSDictionary *)dictionaryFromEncryptParams:(NSDictionary *)paras;
@end

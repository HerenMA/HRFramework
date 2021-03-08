//
//  HRCache.h
//  HRFramework
//
//  Created by 尹建军 on 2017/4/7.
//  Copyright © 2017年 浙江和仁科技股份有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 缓存
 */
@interface HRCache : NSObject

/**
 缓存网络数据

 @param data 数据
 @param cacheKey 缓存键值
 */
+ (void)setCacheWithData:(id)data cacheKey:(NSString *)cacheKey;

/**
 取出缓存数据

 @param cacheKey 缓存键值
 @return 缓存的数据
 */
+ (id)cacheForKey:(NSString *)cacheKey;

/**
 异步读取缓存

 @param cacheKey 缓存键值
 @param block 异步回调缓存的数据
 */
+ (void)cacheForKey:(NSString *)cacheKey withBlock:(void(^)(id<NSCoding> object))block;

/**
 移除缓存数据

 @param cacheKey 缓存键值
 */
+ (void)removeCacheForKey:(NSString *)cacheKey;


/**
 获取网络缓存的总大小 bytes(字节)
 
 @return <#return value description#>
 */
+ (NSInteger)getAllHttpCacheSize;

/**
 移除所有网络缓存
 */
+ (void)removeAllHttpCache;

@end

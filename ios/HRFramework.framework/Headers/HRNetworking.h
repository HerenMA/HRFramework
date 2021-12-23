//
//  HRNetworking.h
//  HRFramework
//
//  Created by 尹建军 on 2017/4/6.
//  Copyright © 2017年 浙江和仁科技股份有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>

#pragma mark - 宏
#ifndef kIsNetwork
    /// 一次性判断是否有网的宏
    #define kIsNetwork [[HRNetworking sharedNetworking] isNetwork]
#endif

#ifndef kIsWWANNetwork
    /// 一次性判断是否为手机网络的宏
    #define kIsWWANNetwork [[HRNetworking sharedNetworking] isWWANNetwork]
#endif

#ifndef kIsWiFiNetwork
    /// 一次性判断是否为WiFi网络的宏
    #define kIsWiFiNetwork [[HRNetworking sharedNetworking] isWiFiNetwork]
#endif

#pragma mark - 枚举
/**
 网络状态
 */
typedef NS_ENUM(NSUInteger, HRNetworkStatusType) {
    /** 未知网络*/
    HRNetworkStatusUnknown = 0,
    /** 无网络*/
    HRNetworkStatusNotReachable = 1,
    /** 手机网络*/
    HRNetworkStatusReachableViaWWAN = 2,
    /** WIFI网络*/
    HRNetworkStatusReachableViaWiFi = 3
};

/**
 请求数据格式
 */
typedef NS_ENUM(NSUInteger, HRRequestSerializer) {
    /** 设置请求数据为JSON格式*/
    HRRequestSerializerJSON = 0,
    /** 设置请求数据为二进制格式*/
    HRRequestSerializerHTTP = 1,
    /** 设置请求数据为Plain格式，无进度回调且限POST*/
    HRRequestSerializerPlain = 2
};

/**
 响应数据格式
 */
typedef NS_ENUM(NSUInteger, HRResponseSerializer) {
    /** 设置响应数据为JSON格式*/
    HRResponseSerializerJSON = 0,
    /** 设置响应数据为二进制格式*/
    HRResponseSerializerHTTP = 1,
};

#pragma mark - Block
/** 缓存的Block */
typedef void (^HRHttpRequestCache)(id responseCache);
/** 请求成功的Block */
typedef void (^HRHttpRequestSuccess)(id responseObject);
/** 请求失败的Block */
typedef void (^HRHttpRequestFailed)(NSInteger errorCode, NSString *errorDescription);
/** 请求失败的BlockV2 */
typedef void (^HRHttpRequestFailure)(NSInteger errorCode, NSString *errorDescription, NSError *error, NSDictionary *extras);
/** 请求进度的Block */
typedef void (^HRHttpRequestProgress)(NSUInteger fractionCompleted);
/** 下载完成的Block */
typedef void (^HRHttpDownloadSuccess)(NSString *filePath);
/** 网络状态的Block*/
typedef void (^HRNetworkStatus)(HRNetworkStatusType status);

/**
 网络请求
 */
@interface HRNetworking : NSObject

/**
 单例

 @return <#return value description#>
 */
+ (instancetype)sharedNetworking;

#pragma mark - 配置
/**
 网络请求超时时间
 */
@property (assign, nonatomic) NSTimeInterval timeoutInterval;

/**
 开启日志打印 (Debug级别)
 */
- (void)openLog;

/**
 关闭日志打印
 */
- (void)closeLog;

#pragma mark - 网络状态
/**
 有网YES, 无网:NO

 @return <#return value description#>
 */
- (BOOL)isNetwork;

/**
 手机网络:YES, 反之:NO

 @return <#return value description#>
 */
- (BOOL)isWWANNetwork;

/**
 WiFi网络:YES, 反之:NO

 @return <#return value description#>
 */
- (BOOL)isWiFiNetwork;

/**
 实时获取网络状态,通过Block回调实时获取(此方法可多次调用)

 @param networkStatus <#networkStatus description#>
 */
- (void)networkStatusWithBlock:(HRNetworkStatus)networkStatus;

#pragma mark - 请求头
/**
 添加请求头

 @param field <#field description#>
 @param value <#value description#>
 */
- (void)addHTTPHeaderWithField:(NSString *)field value:(NSString *)value;

/**
 移除请求头
 */
- (void)removeHTTPHeader;

#pragma mark - Download请求
/**
 Download请求
 
 @param URLString 网址
 @param filePath 保存路径
 @param progress 进度回调
 @param success 成功回调
 @param failed 失败回调
 @return 返回的对象可取消请求,调用cancel方法
 */
- (NSURLSessionDownloadTask *)Download:(NSString *)URLString filePath:(NSString *)filePath progress:(HRHttpRequestProgress)progress success:(HRHttpDownloadSuccess)success failed:(HRHttpRequestFailure)failed;

#pragma mark - GET请求
/**
 GET请求
 
 @param URLString 网址
 @param success 成功回调
 @param failed 失败回调
 @return 返回的对象可取消请求,调用cancel方法
 */
- (NSURLSessionDataTask *)GET:(NSString *)URLString success:(HRHttpRequestSuccess)success failed:(HRHttpRequestFailure)failed;

/**
 GET请求

 @param URLString 网址
 @param parameters 参数
 @param success 成功回调
 @param failed 失败回调
 @return 返回的对象可取消请求,调用cancel方法
 */
- (NSURLSessionDataTask *)GET:(NSString *)URLString parameters:(id)parameters success:(HRHttpRequestSuccess)success failed:(HRHttpRequestFailure)failed;

/**
 GET请求
 
 @param URLString 网址
 @param progress 进度回调
 @param success 成功回调
 @param failed 失败回调
 @return 返回的对象可取消请求,调用cancel方法
 */
- (NSURLSessionDataTask *)GET:(NSString *)URLString progress:(HRHttpRequestProgress)progress success:(HRHttpRequestSuccess)success failed:(HRHttpRequestFailure)failed;

/**
 GET请求

 @param URLString 网址
 @param parameters 参数
 @param progress 进度回调
 @param success 成功回调
 @param failed 失败回调
 @return 返回的对象可取消请求,调用cancel方法
 */
- (NSURLSessionDataTask *)GET:(NSString *)URLString parameters:(id)parameters progress:(HRHttpRequestProgress)progress success:(HRHttpRequestSuccess)success failed:(HRHttpRequestFailure)failed;

#pragma mark - POST请求,无缓存
/**
 POST请求,无缓存

 @param URLString 网址
 @param parameters 参数
 @param success 成功回调
 @param failed 失败回调
 @return 返回的对象可取消请求,调用cancel方法
 */
- (NSURLSessionDataTask *)POST:(NSString *)URLString parameters:(id)parameters success:(HRHttpRequestSuccess)success failed:(HRHttpRequestFailure)failed;

/**
 POST请求,无缓存
 
 @param URLString 网址
 @param parameters 参数
 @param progress 进度回调
 @param success 成功回调
 @param failed 失败回调
 @return 返回的对象可取消请求,调用cancel方法
 */
- (NSURLSessionDataTask *)POST:(NSString *)URLString parameters:(id)parameters progress:(HRHttpRequestProgress)progress success:(HRHttpRequestSuccess)success failed:(HRHttpRequestFailure)failed;

/**
 POST请求,无缓存

 @param URLString 网址
 @param parameters 参数
 @param requestSerializer 请求数据格式
 @param success 成功回调
 @param failed 失败回调
 @return 返回的对象可取消请求,调用cancel方法
 */
- (NSURLSessionDataTask *)POST:(NSString *)URLString parameters:(id)parameters requestSerializer:(HRRequestSerializer)requestSerializer success:(HRHttpRequestSuccess)success failed:(HRHttpRequestFailure)failed;

/**
 POST请求,无缓存

 @param URLString 网址
 @param parameters 参数
 @param requestSerializer 请求数据格式
 @param progress 进度回调
 @param success 成功回调
 @param failed 失败回调
 @return 返回的对象可取消请求,调用cancel方法
 */
- (NSURLSessionDataTask *)POST:(NSString *)URLString parameters:(id)parameters requestSerializer:(HRRequestSerializer)requestSerializer progress:(HRHttpRequestProgress)progress success:(HRHttpRequestSuccess)success failed:(HRHttpRequestFailure)failed;

/**
 POST请求,无缓存

 @param URLString 网址
 @param parameters 参数
 @param requestSerializer 请求数据格式
 @param responseSerializer 响应数据格式
 @param success 成功回调
 @param failed 失败回调
 @return 返回的对象可取消请求,调用cancel方法
 */
- (NSURLSessionDataTask *)POST:(NSString *)URLString parameters:(id)parameters requestSerializer:(HRRequestSerializer)requestSerializer responseSerializer:(HRResponseSerializer)responseSerializer success:(HRHttpRequestSuccess)success failed:(HRHttpRequestFailure)failed;

/**
 POST请求,无缓存
 
 @param URLString 网址
 @param parameters 参数
 @param requestSerializer 请求数据格式
 @param responseSerializer 响应数据格式
 @param progress 进度回调
 @param success 成功回调
 @param failed 失败回调
 @return 返回的对象可取消请求,调用cancel方法
 */
- (NSURLSessionDataTask *)POST:(NSString *)URLString parameters:(id)parameters requestSerializer:(HRRequestSerializer)requestSerializer responseSerializer:(HRResponseSerializer)responseSerializer progress:(HRHttpRequestProgress)progress success:(HRHttpRequestSuccess)success failed:(HRHttpRequestFailure)failed;

#pragma mark - POST请求,自动缓存
/**
 POST请求,自动缓存
 
 @param URLString 网址
 @param parameters 参数
 @param cache 缓存回调
 @param success 成功回调
 @param failed 失败回调
 @return 返回的对象可取消请求,调用cancel方法
 */
- (NSURLSessionDataTask *)POST:(NSString *)URLString parameters:(id)parameters cache:(HRHttpRequestCache)cache success:(HRHttpRequestSuccess)success failed:(HRHttpRequestFailure)failed;

/**
 POST请求,自动缓存
 
 @param URLString 网址
 @param parameters 参数
 @param cache 缓存回调
 @param progress 进度回调
 @param success 成功回调
 @param failed 失败回调
 @return 返回的对象可取消请求,调用cancel方法
 */
- (NSURLSessionDataTask *)POST:(NSString *)URLString parameters:(id)parameters cache:(HRHttpRequestCache)cache progress:(HRHttpRequestProgress)progress success:(HRHttpRequestSuccess)success failed:(HRHttpRequestFailure)failed;

/**
 POST请求,自动缓存
 
 @param URLString 网址
 @param parameters 参数
 @param requestSerializer 请求数据格式
 @param cache 缓存回调
 @param success 成功回调
 @param failed 失败回调
 @return 返回的对象可取消请求,调用cancel方法
 */
- (NSURLSessionDataTask *)POST:(NSString *)URLString parameters:(id)parameters requestSerializer:(HRRequestSerializer)requestSerializer cache:(HRHttpRequestCache)cache success:(HRHttpRequestSuccess)success failed:(HRHttpRequestFailure)failed;

/**
 POST请求,自动缓存
 
 @param URLString 网址
 @param parameters 参数
 @param requestSerializer 请求数据格式
 @param cache 缓存回调
 @param progress 进度回调
 @param success 成功回调
 @param failed 失败回调
 @return 返回的对象可取消请求,调用cancel方法
 */
- (NSURLSessionDataTask *)POST:(NSString *)URLString parameters:(id)parameters requestSerializer:(HRRequestSerializer)requestSerializer cache:(HRHttpRequestCache)cache progress:(HRHttpRequestProgress)progress success:(HRHttpRequestSuccess)success failed:(HRHttpRequestFailure)failed;

/**
 POST请求,自动缓存
 
 @param URLString 网址
 @param parameters 参数
 @param requestSerializer 请求数据格式
 @param responseSerializer 响应数据格式
 @param cache 缓存回调
 @param success 成功回调
 @param failed 失败回调
 @return 返回的对象可取消请求,调用cancel方法
 */
- (NSURLSessionDataTask *)POST:(NSString *)URLString parameters:(id)parameters requestSerializer:(HRRequestSerializer)requestSerializer responseSerializer:(HRResponseSerializer)responseSerializer cache:(HRHttpRequestCache)cache success:(HRHttpRequestSuccess)success failed:(HRHttpRequestFailure)failed;

/**
 POST请求,自动缓存
 
 @param URLString 网址
 @param parameters 参数
 @param requestSerializer 请求数据格式
 @param responseSerializer 响应数据格式
 @param cache 缓存回调
 @param progress 进度回调
 @param success 成功回调
 @param failed 失败回调
 @return 返回的对象可取消请求,调用cancel方法
 */
- (NSURLSessionDataTask *)POST:(NSString *)URLString parameters:(id)parameters requestSerializer:(HRRequestSerializer)requestSerializer responseSerializer:(HRResponseSerializer)responseSerializer cache:(HRHttpRequestCache)cache progress:(HRHttpRequestProgress)progress success:(HRHttpRequestSuccess)success failed:(HRHttpRequestFailure)failed;

@end

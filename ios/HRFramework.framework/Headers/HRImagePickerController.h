//
//  HRImagePickerController.h
//  HRFramework
//
//  Created by 尹建军 on 2017/4/11.
//  Copyright © 2017年 浙江和仁科技股份有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

/// 拾取类别
typedef NS_ENUM (NSUInteger, HRImagePickerType) {
    /** 系统相册*/
    HRImagePickerTypePhoto  = 0,
    /** 系统相机*/
    HRImagePickerTypeCamera = 1
};

/// 媒体类型
typedef NS_OPTIONS (NSUInteger, HRImagePickerMediaType) {
    /** 无*/
    HRImagePickerMediaTypeNone  = 0,
    /** 图片*/
    HRImagePickerMediaTypeImage = 1,
    /** 视频*/
    HRImagePickerMediaTypeMovie = 2
};

/// 系统相册、相机拾取器
@interface HRImagePickerController : NSObject

/// 显示一个图片选取器，选取完成资源自动回调结果并关闭
/// @param type UIImagePicker类型
/// @param viewController 来源的ViewController
/// @param success 完成回调
/// @param cancel 取消回调
+ (void)showImagePickerOfType:(HRImagePickerType)type fromViewController:(UIViewController *)viewController success:(void (^)(HRImagePickerMediaType mediaType, NSObject *useObject))success cancel:(void (^)(void))cancel;

/// 显示一个图片选取器，选取完成资源自动回调结果并关闭
/// @param type UIImagePicker类型
/// @param mediaType 媒体类型
/// @param viewController 来源的ViewController
/// @param success 完成回调
/// @param cancel 取消回调
+ (void)showImagePickerOfType:(HRImagePickerType)type mediaType:(HRImagePickerMediaType)mediaType fromViewController:(UIViewController *)viewController success:(void (^)(HRImagePickerMediaType mediaType, NSObject *useObject))success cancel:(void (^)(void))cancel;

/// 显示一个图片选取器，选取完成资源自动回调结果并关闭
/// @param type UIImagePicker类型
/// @param viewController 来源的ViewController
/// @param confirmPhoto 是否需要确定，仅 HRImagePickerTypePhoto 时生效
/// @param success 完成回调
/// @param cancel 取消回调
+ (void)showImagePickerOfType:(HRImagePickerType)type fromViewController:(UIViewController *)viewController confirmPhoto:(BOOL)confirmPhoto success:(void (^)(HRImagePickerMediaType mediaType, NSObject *useObject))success cancel:(void (^)(void))cancel;

/// 显示一个图片选取器，选取完成资源自动回调结果并关闭
/// @param type UIImagePicker类型
/// @param mediaType 媒体类型
/// @param viewController 来源的ViewController
/// @param confirmPhoto 是否需要确定，仅 HRImagePickerTypePhoto 时生效
/// @param success 完成回调
/// @param cancel 取消回调
+ (void)showImagePickerOfType:(HRImagePickerType)type mediaType:(HRImagePickerMediaType)mediaType fromViewController:(UIViewController *)viewController confirmPhoto:(BOOL)confirmPhoto success:(void (^)(HRImagePickerMediaType mediaType, NSObject *useObject))success cancel:(void (^)(void))cancel;

/// 显示一个图片选取器，选取完成资源自动回调结果并关闭
/// @param type UIImagePicker类型
/// @param viewController 来源的ViewController
/// @param allowEditing 是否允许编辑
/// @param success 完成回调
/// @param cancel 取消回调
+ (void)showImagePickerOfType:(HRImagePickerType)type fromViewController:(UIViewController *)viewController allowEditing:(BOOL)allowEditing success:(void (^)(HRImagePickerMediaType mediaType, NSObject *useObject))success cancel:(void (^)(void))cancel;

/// 显示一个图片选取器，选取完成资源自动回调结果并关闭
/// @param type UIImagePicker类型
/// @param mediaType 媒体类型
/// @param viewController 来源的ViewController
/// @param allowEditing 是否允许编辑
/// @param success 完成回调
/// @param cancel 取消回调
+ (void)showImagePickerOfType:(HRImagePickerType)type mediaType:(HRImagePickerMediaType)mediaType fromViewController:(UIViewController *)viewController allowEditing:(BOOL)allowEditing success:(void (^)(HRImagePickerMediaType mediaType, NSObject *useObject))success cancel:(void (^)(void))cancel;

/// 显示一个图片选取器，选取完成资源自动回调结果并关闭
/// @param type UIImagePicker类型
/// @param mediaType 媒体类型
/// @param videoMaximumDuration 录像时间长度
/// @param viewController 来源的ViewController
/// @param confirmPhoto  是否需要确定，仅 HRImagePickerTypePhoto 时生效
/// @param allowEditing 是否允许编辑
/// @param success 完成回调
/// @param cancel 取消回调
+ (void)showImagePickerOfType:(HRImagePickerType)type mediaType:(HRImagePickerMediaType)mediaType videoMaximumDuration:(NSInteger)videoMaximumDuration fromViewController:(UIViewController *)viewController confirmPhoto:(BOOL)confirmPhoto allowEditing:(BOOL)allowEditing success:(void (^)(HRImagePickerMediaType mediaType, NSObject *useObject))success cancel:(void (^)(void))cancel;

@end

//
//  HRAlertViewStylePlainTextInput.h
//  HRFramework
//
//  Created by 尹建军 on 2017/7/20.
//  Copyright © 2017年 浙江和仁科技股份有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^HRAlertViewStylePlainTextInputConfirmBlock)(NSString *text);
typedef void (^HRAlertViewStylePlainTextInputCancelBlock)();


/**
 带输入框的弹出对话框
 */
@interface HRAlertViewStylePlainTextInput : NSObject

/// 默认最大长度：140
@property (assign, nonatomic) NSUInteger maxWordNumber;
/// 确定回调
@property (copy, nonatomic) HRAlertViewStylePlainTextInputConfirmBlock confirmBlock;
/// 取消回调
@property (copy, nonatomic) HRAlertViewStylePlainTextInputCancelBlock cancelBlock;


/**
 共享 AlertView

 @return <#return value description#>
 */
+ (instancetype)sharedAlertView;


/**
 显示

 @param title 标题
 */
- (void)showWithTitle:(NSString *)title;

/**
 显示

 @param title 标题
 @param text 文本
 */
- (void)showWithTitle:(NSString *)title text:(NSString *)text;

/**
 显示

 @param title 标题
 @param message 信息
 */
- (void)showWithTitle:(NSString *)title message:(NSString *)message;

/**
 显示
 
 @param title 标题
 @param text 文本
 @param placeholder 占位符
 */
- (void)showWithTitle:(NSString *)title text:(NSString *)text placeholder:(NSString *)placeholder;

/**
 显示

 @param title 标题
 @param message 信息
 @param text 文本
 */
- (void)showWithTitle:(NSString *)title message:(NSString *)message text:(NSString *)text;

/**
 显示

 @param title 标题
 @param message 信息
 @param text 文本
 @param placeholder 占位符
 */
- (void)showWithTitle:(NSString *)title message:(NSString *)message text:(NSString *)text placeholder:(NSString *)placeholder;


/**
 显示

 @param message 信息
 */
- (void)showWithMessage:(NSString *)message;

/**
 显示

 @param message 信息
 @param text 文本
 */
- (void)showWithMessage:(NSString *)message text:(NSString *)text;

/**
 显示

 @param message 信息
 @param text 文本
 @param placeholder 占位符
 */
- (void)showWithMessage:(NSString *)message text:(NSString *)text placeholder:(NSString *)placeholder;

@end

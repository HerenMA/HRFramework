//
//  UITextField+HRExtensions.h
//  HRFramework
//
//  Created by 尹建军 on 2017/7/21.
//  Copyright © 2017年 浙江和仁科技股份有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

/// 监听删除按钮
extern NSString *const UITextFieldDidDeleteBackwardNotification;

/**
 UITextField 分类
 */
@interface UITextField (HRExtensions)

/// 能够输入的最大字符串长度
@property (assign, nonatomic) NSUInteger maxWordNumber;

@end

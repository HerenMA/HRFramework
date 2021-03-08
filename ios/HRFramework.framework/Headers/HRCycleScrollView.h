//
//  HRCycleScrollView.h
//  HRFramework
//
//  Created by 尹建军 on 2017/4/13.
//  Copyright © 2017年 浙江和仁科技股份有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

/** 分页控制器对齐 */
typedef NS_ENUM(NSUInteger, HRCycleScrollViewPageContolAliment) {
    /** 右对齐*/
    HRCycleScrollViewPageContolAlimentRight = 0,
    /** 居中对齐*/
    HRCycleScrollViewPageContolAlimentCenter = 1
};

/** 分页控制器样式 */
typedef NS_ENUM(NSUInteger, HRCycleScrollViewPageContolStyle) {
    /** 不显示*/
    HRCycleScrollViewPageContolStyleNone = 0,
    /** 经典样式*/
    HRCycleScrollViewPageContolStyleClassic = 1
};


@class HRCycleScrollView;

@protocol HRCycleScrollViewDelegate <NSObject>
@optional

/** 点击图片回调 */
- (void)cycleScrollView:(HRCycleScrollView *)cycleScrollView didSelectItemAtIndex:(NSInteger)index;
/** 图片滚动回调 */
- (void)cycleScrollView:(HRCycleScrollView *)cycleScrollView didScrollToIndex:(NSInteger)index;

@end


/**
 图片、文字轮播器
 */
@interface HRCycleScrollView : UIView

/// 委托
@property (weak, nonatomic) id<HRCycleScrollViewDelegate> delegate;
/// block方式监听点击
@property (copy, nonatomic) void (^clickItemOperationBlock)(NSInteger currentIndex);
/// block方式监听滚动
@property (copy, nonatomic) void (^itemDidScrollOperationBlock)(NSInteger currentIndex);


/// 解决 viewWillAppear 时出现时轮播图卡在一半的问题，在控制器viewWillAppear时调用此方法
- (void)adjustWhenControllerViewWillAppera;


/// 网络图片 url string 数组
@property (strong, nonatomic) NSArray *imageURLStringsGroup;
/// 每张图片对应要显示的文字数组
@property (strong, nonatomic) NSArray *titlesGroup;
/// 本地图片数组
@property (strong, nonatomic) NSArray *localizationImageNamesGroup;


/// 自动滚动间隔时间,默认2s
@property (assign, nonatomic) CGFloat autoScrollTimeInterval;
/// 是否无限循环,默认Yes
@property (assign, nonatomic) BOOL infiniteLoop;
/// 是否自动滚动,默认Yes
@property (assign, nonatomic) BOOL autoScroll;
/// 图片滚动方向，默认为水平滚动
@property (assign, nonatomic) UICollectionViewScrollDirection scrollDirection;


/// 轮播图片的ContentMode，默认为 UIViewContentModeScaleToFill
@property (assign, nonatomic) UIViewContentMode bannerImageViewContentMode;
/// 占位图，用于网络未加载到图片时
@property (strong, nonatomic) UIImage *placeholderImage;
/// 是否显示分页控件
@property (assign, nonatomic) BOOL showPageControl;
/// 是否在只有一张图时隐藏pagecontrol，默认为YES
@property (assign, nonatomic) BOOL hidesForSinglePage;
/// 只展示文字轮播
@property (assign, nonatomic) BOOL onlyDisplayText;


/// pagecontrol 样式，默认为动画样式
@property (assign, nonatomic) HRCycleScrollViewPageContolStyle pageControlStyle;
/// 分页控件位置
@property (assign, nonatomic) HRCycleScrollViewPageContolAliment pageControlAliment;
/// 分页控件距离轮播图的底部间距（在默认间距基础上）的偏移量
@property (assign, nonatomic) CGFloat pageControlBottomOffset;
/// 分页控件距离轮播图的右边间距（在默认间距基础上）的偏移量
@property (assign, nonatomic) CGFloat pageControlRightOffset;
/// 分页控件小圆标大小
@property (assign, nonatomic) CGSize pageControlDotSize;
/// 当前分页控件小圆标颜色
@property (strong, nonatomic) UIColor *currentPageDotColor;
/// 其他分页控件小圆标颜色
@property (strong, nonatomic) UIColor *pageDotColor;
/// 当前分页控件小圆标图片
@property (strong, nonatomic) UIImage *currentPageDotImage;
/// 其他分页控件小圆标图片
@property (strong, nonatomic) UIImage *pageDotImage;


/// 轮播文字label字体颜色
@property (strong, nonatomic) UIColor *titleLabelTextColor;
/// 轮播文字label字体大小
@property (strong, nonatomic) UIFont  *titleLabelTextFont;
/// 轮播文字label背景颜色
@property (strong, nonatomic) UIColor *titleLabelBackgroundColor;
/// 轮播文字label高度
@property (assign, nonatomic) CGFloat titleLabelHeight;
/// 轮播文字label对齐方式
@property (assign, nonatomic) NSTextAlignment titleLabelTextAlignment;

@end

//
//  HRLazyScrollView.h
//  HRFramework
//
//  Created by 尹建军 on 2017/7/5.
//  Copyright © 2017年 浙江和仁科技股份有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

@class HRLazyScrollView;

enum {
    /** */
    HRLazyScrollViewDirectionHorizontal = 0,
    /** */
    HRLazyScrollViewDirectionVertical,
};
typedef NSUInteger HRLazyScrollViewDirection;

enum {
    /** */
    HRLazyScrollViewTransitionAuto = 0,
    /** */
    HRLazyScrollViewTransitionForward,
    /** */
    HRLazyScrollViewTransitionBackward
};

typedef NSUInteger HRLazyScrollViewTransition;

@protocol HRLazyScrollViewDelegate <NSObject>
@optional
/**
 <#Description#>

 @param pagingView <#pagingView description#>
 */
- (void)lazyScrollViewWillBeginDragging:(HRLazyScrollView *)pagingView;

/**
 Called when it scrolls, except from as the result of self-driven animation.

 @param pagingView <#pagingView description#>
 @param visibleOffset <#visibleOffset description#>
 */
- (void)lazyScrollViewDidScroll:(HRLazyScrollView *)pagingView at:(CGPoint) visibleOffset;

/**
 Called whenever it scrolls: through user manipulation, setup, or self-driven animation.

 @param pagingView <#pagingView description#>
 @param visibleOffset <#visibleOffset description#>
 @param selfDrivenAnimation <#selfDrivenAnimation description#>
 */
- (void)lazyScrollViewDidScroll:(HRLazyScrollView *)pagingView at:(CGPoint) visibleOffset withSelfDrivenAnimation:(BOOL)selfDrivenAnimation;

/**
 <#Description#>

 @param pagingView <#pagingView description#>
 */
- (void)lazyScrollViewDidEndDragging:(HRLazyScrollView *)pagingView;

/**
 <#Description#>

 @param pagingView <#pagingView description#>
 */
- (void)lazyScrollViewWillBeginDecelerating:(HRLazyScrollView *)pagingView;

/**
 <#Description#>

 @param pagingView <#pagingView description#>
 @param pageIndex <#pageIndex description#>
 */
- (void)lazyScrollViewDidEndDecelerating:(HRLazyScrollView *)pagingView atPageIndex:(NSInteger)pageIndex;

/**
 <#Description#>

 @param pagingView <#pagingView description#>
 @param currentPageIndex <#currentPageIndex description#>
 */
- (void)lazyScrollView:(HRLazyScrollView *)pagingView currentPageChanged:(NSInteger)currentPageIndex;

@end


typedef UIViewController*(^HRLazyScrollViewDataSource)(NSUInteger index);

@interface HRLazyScrollView : UIScrollView

///
@property (copy, nonatomic) HRLazyScrollViewDataSource dataSource;
///
@property (assign, nonatomic) id<HRLazyScrollViewDelegate> controlDelegate;

///
@property (assign, nonatomic) NSUInteger numberOfPages;
///
@property (assign, readonly, nonatomic) NSUInteger currentPage;
///
@property (assign, readonly, nonatomic) HRLazyScrollViewDirection direction;

///
@property (assign, nonatomic) BOOL autoPlay;
/// default 3 seconds
@property (assign, nonatomic) CGFloat autoPlayTime;


/**
 <#Description#>

 @param frame <#frame description#>
 @param direction <#direction description#>
 @param circularScrolling <#circularScrolling description#>
 @return <#return value description#>
 */
- (id)initWithFrameAndDirection:(CGRect)frame direction:(HRLazyScrollViewDirection)direction circularScroll:(BOOL) circularScrolling;

/**
 <#Description#>

 @param circularScrolling <#circularScrolling description#>
 */
- (void)setEnableCircularScroll:(BOOL)circularScrolling;

/**
 <#Description#>

 @return <#return value description#>
 */
- (BOOL)circularScrollEnabled;

/**
 <#Description#>
 */
- (void)reloadData;

/**
 <#Description#>

 @param index <#index description#>
 @param animated <#animated description#>
 */
- (void)setPage:(NSInteger)index animated:(BOOL)animated;

/**
 <#Description#>

 @param newIndex <#newIndex description#>
 @param transition <#transition description#>
 @param animated <#animated description#>
 */
- (void)setPage:(NSInteger)newIndex transition:(HRLazyScrollViewTransition)transition animated:(BOOL)animated;

/**
 <#Description#>

 @param offset <#offset description#>
 @param animated <#animated description#>
 */
- (void)moveByPages:(NSInteger)offset animated:(BOOL)animated;

/**
 <#Description#>

 @return <#return value description#>
 */
- (UIViewController *)visibleViewController;

@end

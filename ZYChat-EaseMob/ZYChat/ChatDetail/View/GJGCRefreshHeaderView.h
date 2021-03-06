//
//  GJGCRefreshHeaderView.h
//  ZYChat
//
//  Created by ZYVincent QQ:1003081775 on 14-11-11.
//  Copyright (c) 2014年 ZYProSoft. All rights reserved.
//

#import <UIKit/UIKit.h>

//#define REFRESH_HEAD_HEIGHT 60.f
#define REFRESH_HEAD_HEIGHT 50.f
//#define TEXT_COLOR	 [UIColor colorWithRed:87.0/255.0 green:108.0/255.0 blue:137.0/255.0 alpha:1.0]
//#define REFRESH_HEAD_HEIGHT 60.f
#define TEXT_COLOR [GJGCCommonFontColorStyle baseAndTitleAssociateTextColor]

@class GJGCRefreshHeaderView;
@protocol GJGCRefreshHeaderViewDelegate <NSObject>

- (void)refreshHeaderViewTriggerRefresh:(GJGCRefreshHeaderView *)headerView;

@end

@interface GJGCRefreshHeaderView : UIView

@property (nonatomic,weak)id<GJGCRefreshHeaderViewDelegate> delegate;

@property (nonatomic,copy)NSString *pullString;

@property (nonatomic)BOOL isLoading;

@property (nonatomic,copy)NSString *releaseString;

@property (nonatomic,copy)NSString *refreshString;

/**
 *  开始刷新
 */
- (void)startLoadingForScrollView:(UIScrollView *)scrollView;

/**
 *  停止刷新
 */
- (void)stopLoadingForScrollView:(UIScrollView *)scrollView;

/**
 *  停止刷新
 *
 *  @param scrollView  <#scrollView description#>
 *  @param isAnimation 是否带动画
 */
- (void)stopLoadingForScrollView:(UIScrollView *)scrollView isAnimation:(BOOL)isAnimation;
/**
 *  设置成聊天页面得样式
 */
- (void)setupChatFooterStyle;

#pragma mark - scrollView delegate method

- (void)scrollViewWillBeginDragging:(UIScrollView *)scrollView;

- (void)scrollViewDidScroll:(UIScrollView *)scrollView;

- (void)scrollViewDidEndDragging:(UIScrollView *)scrollView willDecelerate:(BOOL)decelerate;

@end

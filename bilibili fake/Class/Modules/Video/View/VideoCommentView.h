//
//  VideoCommentView.h
//  bilibili fake
//
//  Created by 翟泉 on 2016/7/19.
//  Copyright © 2016年 云之彼端. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 *  评论
 */
@interface VideoCommentView : UICollectionView

@property (weak, nonatomic) id<UIScrollViewDelegate> scrollViewDelegate;

@end

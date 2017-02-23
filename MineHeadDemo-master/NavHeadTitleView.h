//
//  NavHeadTitleView.h
//  MineHeadDemo-master
//
//  Created by 纵昂 on 2017/2/23.
//  Copyright © 2017年 纵昂. All rights reserved.
//

#import <UIKit/UIKit.h>
@protocol NavHeadTitleViewDelegate <NSObject>
@optional
- (void)NavHeadback;
- (void)NavHeadToRight;
@end
@interface NavHeadTitleView : UIView
@property(nonatomic,assign)id<NavHeadTitleViewDelegate>delegate;
@property(nonatomic,strong)UIImageView * headBgView;
@property(nonatomic,strong)NSString * title;
@property(nonatomic,strong)UIColor * color;
@property(nonatomic,strong)NSString * backTitleImage;
@property(nonatomic,strong)NSString * rightImageView;
@property(nonatomic,strong)NSString * rightTitleImage;

@end

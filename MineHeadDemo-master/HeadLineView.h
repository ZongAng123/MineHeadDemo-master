//
//  HeadLineView.h
//  MineHeadDemo-master
//
//  Created by 纵昂 on 2017/2/23.
//  Copyright © 2017年 纵昂. All rights reserved.
//

#import <UIKit/UIKit.h>
@protocol headLineDelegate <NSObject>

@optional
- (void)refreshHeadLine:(NSInteger)currentIndex;

@end

@interface HeadLineView : UIView
@property(nonatomic,assign)NSInteger CurrentIndex;
@property(nonatomic,strong)NSArray * titleArray;
@property(nonatomic,assign)id<headLineDelegate>delegate;
@end

//
//  MyCollectionViewCell.h
//  练习
//
//  Created by 付金诗 on 16/4/11.
//  Copyright © 2016年 www.fujinshi.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FJSTranstionProtocol.h"
@interface MyCollectionViewCell : UICollectionViewCell<FJSTranstionSnapProtocol>
@property (nonatomic,strong)UIImageView * imageView;
- (void)getValueFromBQImageModel:(BQImageModel *)model;
@end

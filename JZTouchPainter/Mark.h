//
//  Mark.h
//  JZTouchPainter
//
//  Created by 刘劲竹 on 2018/8/26.
//  Copyright © 2018 jinzhu. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol Mark <NSObject>

@property (nonatomic, strong) UIColor *color;

@property (nonatomic, assign) CGFloat size;

@property (nonatomic, assign) CGPoint location;

@property (nonatomic, readonly) NSUInteger count; // 子节点个数

@property (nonatomic, readonly) id<Mark> lastMark;

- (id)copy;

- (void)addMark:(id<Mark>) mark;

- (void)removeMark:(id<Mark>) mark;

- (id<Mark>)childMarkAtIndex:(NSUInteger) index;

@end

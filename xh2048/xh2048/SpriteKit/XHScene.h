//
//  XHScene.h
//  xh2048
//
//  Created by hui xiang on 2019/2/2.
//  Copyright © 2019 xianghui. All rights reserved.
//

@import SpriteKit;
@class XHGrid;
@class XHViewController;

@interface XHScene : SKScene

@property (nonatomic, weak) XHViewController *controller;

- (void)startNewGame;

- (void)loadBoardWithGrid:(XHGrid *)grid;

@end

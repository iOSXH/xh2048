//
//  XHCell.m
//  xh2048
//
//  Created by hui xiang on 2019/2/2.
//  Copyright © 2019 xianghui. All rights reserved.
//

#import "XHCell.h"
#import "XHTile.h"

@implementation XHCell

- (instancetype)initWithPosition:(XHPosition)position {
    if (self = [super init]) {
        self.position = position;
        self.tile = nil;
    }
    return self;
}


- (void)setTile:(XHTile *)tile {
    _tile = tile;
    if (tile) tile.cell = self;
}

@end

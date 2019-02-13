//
//  XHCell.h
//  xh2048
//
//  Created by hui xiang on 2019/2/2.
//  Copyright © 2019 xianghui. All rights reserved.
//

@import Foundation;
@class XHTile;

@interface XHCell : NSObject

/** The position of the cell. */
@property (nonatomic) XHPosition position;

/** The tile in the cell, if any. */
@property (nonatomic, strong) XHTile *tile;

/**
 * Initialize a XHCell at the specified position with no tile in it.
 *
 * @param position The position of the cell.
 */
- (instancetype)initWithPosition:(XHPosition)position;

@end

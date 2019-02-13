//
//  XHTile.h
//  xh2048
//
//  Created by hui xiang on 2019/2/2.
//  Copyright © 2019 xianghui. All rights reserved.
//

@import SpriteKit;
@class XHCell;

@interface XHTile : SKShapeNode

/** The level of the tile. */
@property (nonatomic) NSInteger level;

/** The cell this tile belongs to. */
@property (nonatomic, weak) XHCell *cell;

/**
 * Creates and inserts a new tile at the specified cell.
 *
 * @param cell The cell to insert tile into.
 * @return The tile created.
 */
+ (XHTile *)insertNewTileToCell:(XHCell *)cell;

- (void)commitPendingActions;

/**
 * Whether this tile can merge with the given tile.
 *
 * @param tile The target tile to merge with.
 * @return YES if the two tiles can be merged.
 */
- (BOOL)canMergeWithTile:(XHTile *)tile;


/**
 * Checks whether this tile can merge with the given tile, and merge them
 * if possible. The resulting tile is at the position of the given tile.
 *
 * @param tile Target tile to merge into.
 * @return The resulting level of the merge, or 0 if unmergeable.
 */
- (NSInteger)mergeToTile:(XHTile *)tile;

- (NSInteger)merge3ToTile:(XHTile *)tile andTile:(XHTile *)furtherTile;

/**
 * Moves the tile to the specified cell. If the tile is not already in the grid,
 * calling this method would result in error.
 *
 * @param cell The destination cell.
 */
- (void)moveToCell:(XHCell *)cell;


/**
 * Removes the tile from its cell and from the scene.
 *
 * @param animated If YES, the removal will be animated.
 */
- (void)removeAnimated:(BOOL)animated;

@end


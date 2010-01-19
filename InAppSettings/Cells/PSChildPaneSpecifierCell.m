//
//  PSToggleSwitchSpecifier.m
//  InAppSettingsTestApp
//
//  Created by David Keegan on 11/21/09.
//  Copyright 2009 InScopeApps{+}. All rights reserved.
//

#import "PSChildPaneSpecifierCell.h"
#import "InAppSettingsConstants.h"

@implementation PSChildPaneSpecifierCell

- (void)setUIValues{
    [super setUIValues];
    
    [self setTitle];
}

- (void)setupCell{
    [super setupCell];
    
    [self setDisclosure:YES];
    self.canSelectCell = YES;
}

@end

//
//  InAppSettingsTableCell.h
//  InAppSettingsTestApp
//
//  Created by David Keegan on 11/21/09.
//  Copyright 2009 InScopeApps{+}. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "InAppSetting.h"

@interface InAppSettingsTableCell : UITableViewCell {
    InAppSetting *setting;
    UILabel *titleLabel, *valueLabel;
    UIControl *valueInput;
    BOOL canSelectCell;
}

@property (nonatomic, retain) InAppSetting *setting;
@property (nonatomic, retain) UILabel *titleLabel, *valueLabel;
@property (nonatomic, assign) UIControl *valueInput;
@property (nonatomic, assign) BOOL canSelectCell;

- (void)setTitle;
- (void)setDetail;
- (void)setTitle:(NSString *)title;
- (void)setDetail:(NSString *)detail;
- (void)setDisclosure:(BOOL)disclosure;

- (id)getValue;
- (void)setValue:(id)newValue;
- (void)setValueDelegate:(id)delegate;

- (void)setupCell;
- (void)setUIValues;
- (id)initWithReuseIdentifier:(NSString *)reuseIdentifier;

@end

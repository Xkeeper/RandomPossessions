//
//  BNRItem.h
//  RandomPossessions
//
//  Created by пользователь on 09.01.13.
//  Copyright (c) 2013 test. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BNRItem : NSObject
{
    NSString *itemName;
    NSString *serialNumber;
    int valueInDollars;
    NSDate *dateCreated;
}


+ (id)randomItem;

- (id)initWithItemName:(NSString *)name valueinDollars:(int)value serialNumber:(NSString *) sNumber;

- (id)initWithItemName:(NSString *)name serialNumber:(NSString *)sNumber;


- (void)setItemName:(NSString *) str;
- (NSString *)itemName;

- (void)setSerialNumber:(NSString *) str;
- (NSString *)serialNumber;

- (void)setValueInDollars:(int) i;
- (int)valueInDollars;

- (NSDate *)dateCreated;

@end

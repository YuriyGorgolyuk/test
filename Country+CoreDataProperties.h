//
//  Country+CoreDataProperties.h
//  CountriesCoreData
//
//  Created by Yuriy Gorgolyuk on 7/27/17.
//  Copyright © 2017 Yuriy Gorgolyuk. All rights reserved.
//  This file was automatically generated and should not be edited.
//

#import "Country+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface Country (CoreDataProperties)

+ (NSFetchRequest<Country *> *)fetchRequest;

@property (nullable, nonatomic, copy) NSString *nameCountry;
@property (nonatomic) int16_t squareOf;
@property (nonatomic) int32_t population;

@end

NS_ASSUME_NONNULL_END

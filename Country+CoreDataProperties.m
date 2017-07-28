//
//  Country+CoreDataProperties.m
//  CountriesCoreData
//
//  Created by Yuriy Gorgolyuk on 7/27/17.
//  Copyright © 2017 Yuriy Gorgolyuk. All rights reserved.
//  This file was automatically generated and should not be edited.
//

#import "Country+CoreDataProperties.h"

@implementation Country (CoreDataProperties)

+ (NSFetchRequest<Country *> *)fetchRequest {
	return [[NSFetchRequest alloc] initWithEntityName:@"Country"];
}

@dynamic nameCountry;
@dynamic squareOf;
@dynamic population;

@end

import pandas as pd
import pandas_datareader.data as web
import matplotlib.pyplot as plt
import numpy as np

def fetch_stock_data(stock_symbol, start_date, end_date):
    """
    Fetch historical stock price data from Yahoo Finance.

    Args:
        stock_symbol (str): Symbol of the stock (e.g., 'AAPL' for Apple Inc.).
        start_date (str): Start date for data retrieval in 'YYYY-MM-DD' format.
        end_date (str): End date for data retrieval in 'YYYY-MM-DD' format.

    Returns:
        DataFrame: DataFrame containing the stock price data.
    """
    try:
        stock_data = web.DataReader(stock_symbol, data_source='yahoo', start=start_date, end=end_date)
        return stock_data
    except Exception as e:
        print(f"Error fetching data: {e}")

def plot_stock_data(stock_data, stock_symbol):
    """
    Plot the closing price of the stock.

    Args:
        stock_data (DataFrame): DataFrame containing the stock price data.
        stock_symbol (str): Symbol of the stock.
    """
    try:
        plt.figure(figsize=(12, 6))
        plt.plot(stock_data['Close'], label='Close Price', color='blue')
        plt.title(f'{stock_symbol} Close Price')
        plt.xlabel('Date')
        plt.ylabel('Price (USD)')
        plt.legend()
        plt.show()
    except Exception as e:
        print(f"Error plotting data: {e}")

def analyze_stock_data(stock_data):
    """
    Analyze the stock price data and display descriptive statistics.

    Args:
        stock_data (DataFrame): DataFrame containing the stock price data.
    """
    try:
        descriptive_stats = stock_data['Close'].describe()
        print(descriptive_stats)
    except Exception as e:
        print(f"Error analyzing data: {e}")

def main():
    """
    Main function to fetch, plot, and analyze stock market data.
    """
    try:
        # Input parameters
        stock_symbol = input("Enter stock symbol (e.g., AAPL for Apple Inc.): ").upper()
        start_date = input("Enter start date (YYYY-MM-DD): ")
        end_date = input("Enter end date (YYYY-MM-DD): ")

        # Fetch stock data
        stock_data = fetch_stock_data(stock_symbol, start_date, end_date)

        if stock_data is not None:
            # Display stock data
            plot_stock_data(stock_data, stock_symbol)

            # Analyze stock data
            analyze_stock_data(stock_data)
    except KeyboardInterrupt:
        print("Program terminated by user.")
    except Exception as e:
        print(f"An error occurred: {e}")

if __name__ == "__main__":
    main()
